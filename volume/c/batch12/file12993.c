// fichero 12993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12993;

Registro12993 crear_registro12993(int id) {
    Registro12993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
