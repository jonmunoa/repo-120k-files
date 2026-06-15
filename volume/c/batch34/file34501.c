// fichero 34501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34501;

Registro34501 crear_registro34501(int id) {
    Registro34501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
