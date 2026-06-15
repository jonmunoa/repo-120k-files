// fichero 40873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40873;

Registro40873 crear_registro40873(int id) {
    Registro40873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
