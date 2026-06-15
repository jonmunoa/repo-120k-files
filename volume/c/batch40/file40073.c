// fichero 40073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40073;

Registro40073 crear_registro40073(int id) {
    Registro40073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
