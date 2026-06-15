// fichero 11185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11185;

Registro11185 crear_registro11185(int id) {
    Registro11185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
