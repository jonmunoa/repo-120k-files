// fichero 23981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23981;

Registro23981 crear_registro23981(int id) {
    Registro23981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
