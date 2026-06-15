// fichero 21685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21685;

Registro21685 crear_registro21685(int id) {
    Registro21685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
