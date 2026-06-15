// fichero 4781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4781;

Registro4781 crear_registro4781(int id) {
    Registro4781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
