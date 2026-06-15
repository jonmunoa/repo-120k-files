// fichero 32905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32905;

Registro32905 crear_registro32905(int id) {
    Registro32905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
