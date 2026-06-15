// fichero 15333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15333;

Registro15333 crear_registro15333(int id) {
    Registro15333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
