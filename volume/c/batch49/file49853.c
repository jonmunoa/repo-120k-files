// fichero 49853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49853;

Registro49853 crear_registro49853(int id) {
    Registro49853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
