// fichero 40693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40693;

Registro40693 crear_registro40693(int id) {
    Registro40693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
