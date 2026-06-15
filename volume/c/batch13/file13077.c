// fichero 13077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13077;

Registro13077 crear_registro13077(int id) {
    Registro13077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
