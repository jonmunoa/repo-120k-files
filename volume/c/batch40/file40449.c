// fichero 40449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40449;

Registro40449 crear_registro40449(int id) {
    Registro40449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
