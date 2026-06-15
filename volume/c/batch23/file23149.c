// fichero 23149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23149;

Registro23149 crear_registro23149(int id) {
    Registro23149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
