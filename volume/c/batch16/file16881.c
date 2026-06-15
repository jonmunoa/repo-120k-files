// fichero 16881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16881;

Registro16881 crear_registro16881(int id) {
    Registro16881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
