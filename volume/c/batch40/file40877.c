// fichero 40877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40877;

Registro40877 crear_registro40877(int id) {
    Registro40877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
