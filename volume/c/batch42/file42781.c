// fichero 42781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42781;

Registro42781 crear_registro42781(int id) {
    Registro42781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
