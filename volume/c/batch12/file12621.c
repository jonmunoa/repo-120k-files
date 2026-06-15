// fichero 12621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12621;

Registro12621 crear_registro12621(int id) {
    Registro12621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
