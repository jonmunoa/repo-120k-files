// fichero 47113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47113;

Registro47113 crear_registro47113(int id) {
    Registro47113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
