// fichero 21153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21153;

Registro21153 crear_registro21153(int id) {
    Registro21153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
