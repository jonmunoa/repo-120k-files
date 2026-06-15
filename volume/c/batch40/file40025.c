// fichero 40025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40025;

Registro40025 crear_registro40025(int id) {
    Registro40025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
