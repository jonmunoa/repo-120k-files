// fichero 20333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20333;

Registro20333 crear_registro20333(int id) {
    Registro20333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
