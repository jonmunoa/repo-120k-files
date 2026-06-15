// fichero 49545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49545;

Registro49545 crear_registro49545(int id) {
    Registro49545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
