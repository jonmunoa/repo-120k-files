// fichero 12113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12113;

Registro12113 crear_registro12113(int id) {
    Registro12113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
