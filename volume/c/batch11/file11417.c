// fichero 11417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11417;

Registro11417 crear_registro11417(int id) {
    Registro11417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
