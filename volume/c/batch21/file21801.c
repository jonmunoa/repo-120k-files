// fichero 21801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21801;

Registro21801 crear_registro21801(int id) {
    Registro21801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
