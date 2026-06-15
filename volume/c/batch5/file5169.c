// fichero 5169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5169;

Registro5169 crear_registro5169(int id) {
    Registro5169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
