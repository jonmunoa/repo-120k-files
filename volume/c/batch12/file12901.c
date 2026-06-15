// fichero 12901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12901;

Registro12901 crear_registro12901(int id) {
    Registro12901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
