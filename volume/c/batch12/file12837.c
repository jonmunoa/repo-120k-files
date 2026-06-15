// fichero 12837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12837;

Registro12837 crear_registro12837(int id) {
    Registro12837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
