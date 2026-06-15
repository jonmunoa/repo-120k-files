// fichero 21129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21129;

Registro21129 crear_registro21129(int id) {
    Registro21129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
