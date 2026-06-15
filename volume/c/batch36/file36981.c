// fichero 36981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36981;

Registro36981 crear_registro36981(int id) {
    Registro36981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
