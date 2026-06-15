// fichero 27781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27781;

Registro27781 crear_registro27781(int id) {
    Registro27781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
