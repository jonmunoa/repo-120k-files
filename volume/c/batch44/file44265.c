// fichero 44265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44265;

Registro44265 crear_registro44265(int id) {
    Registro44265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
