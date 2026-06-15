// fichero 24161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24161;

Registro24161 crear_registro24161(int id) {
    Registro24161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
