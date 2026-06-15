// fichero 49717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49717;

Registro49717 crear_registro49717(int id) {
    Registro49717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
