// fichero 20605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20605;

Registro20605 crear_registro20605(int id) {
    Registro20605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
