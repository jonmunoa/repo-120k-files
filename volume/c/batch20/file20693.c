// fichero 20693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20693;

Registro20693 crear_registro20693(int id) {
    Registro20693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
