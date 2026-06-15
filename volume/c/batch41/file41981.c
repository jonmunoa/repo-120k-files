// fichero 41981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41981;

Registro41981 crear_registro41981(int id) {
    Registro41981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
