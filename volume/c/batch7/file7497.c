// fichero 7497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7497;

Registro7497 crear_registro7497(int id) {
    Registro7497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
