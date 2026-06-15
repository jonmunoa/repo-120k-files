// fichero 21505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21505;

Registro21505 crear_registro21505(int id) {
    Registro21505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
