// fichero 33981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33981;

Registro33981 crear_registro33981(int id) {
    Registro33981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
