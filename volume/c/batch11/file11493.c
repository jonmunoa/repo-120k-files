// fichero 11493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11493;

Registro11493 crear_registro11493(int id) {
    Registro11493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
