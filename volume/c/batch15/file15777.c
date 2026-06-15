// fichero 15777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15777;

Registro15777 crear_registro15777(int id) {
    Registro15777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
