// fichero 44037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44037;

Registro44037 crear_registro44037(int id) {
    Registro44037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
