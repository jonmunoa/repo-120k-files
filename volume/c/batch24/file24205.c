// fichero 24205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24205;

Registro24205 crear_registro24205(int id) {
    Registro24205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
