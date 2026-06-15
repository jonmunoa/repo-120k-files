// fichero 21289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21289;

Registro21289 crear_registro21289(int id) {
    Registro21289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
