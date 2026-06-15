// fichero 3205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3205;

Registro3205 crear_registro3205(int id) {
    Registro3205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
