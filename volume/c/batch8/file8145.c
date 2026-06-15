// fichero 8145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8145;

Registro8145 crear_registro8145(int id) {
    Registro8145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
