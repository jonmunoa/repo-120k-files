// fichero 5545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5545;

Registro5545 crear_registro5545(int id) {
    Registro5545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
