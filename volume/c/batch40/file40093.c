// fichero 40093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40093;

Registro40093 crear_registro40093(int id) {
    Registro40093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
