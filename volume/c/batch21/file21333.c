// fichero 21333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21333;

Registro21333 crear_registro21333(int id) {
    Registro21333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
