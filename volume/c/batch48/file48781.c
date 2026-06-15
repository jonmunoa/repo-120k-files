// fichero 48781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48781;

Registro48781 crear_registro48781(int id) {
    Registro48781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
