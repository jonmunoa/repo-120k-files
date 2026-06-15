// fichero 21769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21769;

Registro21769 crear_registro21769(int id) {
    Registro21769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
