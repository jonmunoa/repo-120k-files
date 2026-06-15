// fichero 17905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17905;

Registro17905 crear_registro17905(int id) {
    Registro17905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
