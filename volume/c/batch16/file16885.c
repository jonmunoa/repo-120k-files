// fichero 16885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16885;

Registro16885 crear_registro16885(int id) {
    Registro16885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
